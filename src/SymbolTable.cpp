#include "../include/SymbolTable.h"

SymbolTable::SymbolTable() {
    // push global scope
    scopes.emplace_back();
}

void SymbolTable::enterScope() {
    scopes.emplace_back();
}

void SymbolTable::exitScope() {
    if (scopes.size() > 1) {
        scopes.pop_back();
    }
}

bool SymbolTable::insert(const std::string &name, void *addr) {
    auto &current = scopes.back();
    if (current.find(name) != current.end()) return false;
    current[name] = addr;
    return true;
}

void* SymbolTable::lookup(const std::string &name) const {
    for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
        auto found = it->find(name);
        if (found != it->end()) return found->second;
    }
    return nullptr;
}
