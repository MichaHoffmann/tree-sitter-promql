# tree-sitter-promql

tree-sitter grammar for the [promql](https://prometheus.io/docs/prometheus/latest/querying/basics/) language

## Developing

It is recommended to use `nix` to fulfill all development dependencies. To activate the development environment simply run `nix-shell` in the project root.

## Running Tests

To run tests simply run `nix-shell --run 'tree-sitter test'`.

## Compliance

The directory `corpus` contains a corpus of PromQL queries from the internet.

```bash
nix-shell -run 'tree-sitter parse --quiet --stat example/real_world/*/*.promql'

Total parses: 219; successful parses: 219; failed parses: 0; success percentage: 100.00%
```
