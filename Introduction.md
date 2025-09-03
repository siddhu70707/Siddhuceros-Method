#  The Siddhuceros Method

The Siddhuceros Method is an optimized algorithm for generating squares of natural numbers using only additions.  
Instead of calculating each square with costly multiplications, this method builds each new square from the previous one:

\[
(n+1)^2 = n^2 + (2n + 1)
\]

This reduces repeated multiplications and is especially useful when precomputing a range of squares (e.g., 1² to 100²).

---
