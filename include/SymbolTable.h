#pragma once

#include <string>
#include <unordered_map>
#include <vector>
#include <optional>

// A minimal SymbolTable for the course project.
// We store addresses as void* to avoid pulling in LLVM headers in this module.
class SymbolTable {
public:
    SymbolTable();

    // Enter a new nested scope.
    void enterScope();

    // Exit the current scope.
    void exitScope();

    // Insert a symbol in the current scope. Returns false if the name already exists in current scope.
    bool insert(const std::string &name, void *addr);

    // Lookup a symbol by name. Returns nullptr if not found.
    void* lookup(const std::string &name) const;

private:
    std::vector<std::unordered_map<std::string, void*>> scopes;
};
