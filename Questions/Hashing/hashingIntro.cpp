// Why Hashing?
// - finding a unique index (hash value) for all elements to store them is known as hashing.
// - Hashing is used to search, insert, and delete in O(1) time complexity.
// - Hashing is used to store the data in a hash table.

// What are hash function?
// 1. Division Method  --> h(k) = k % m
// 2. Multiplication Method  --> h(k) = floor(m * (k * A % 1))  0 < A < 1
// 3. Mid Square Method   --> h(k) = k^2 & extract the middle digits.
// 4. Folding Method  --> h(k) = k1 + k2 + k3 + k4 + k5, k = 12345, k1 = 12, k2 = 34, k3 = 5

// What is Collision?
// - Collision occurs when two different keys have the same hash value.
// Types of Collision:
// 1. Open Hashing(closed addressing)  --> Separate Chaining
// 2. Closed Hashing(open addressing)  --> Linear Probing, Quadratic Probing, Double Hashing

// What is Separate Chaining?
// - Separate chaining is a collision resolution technique in hashing.
// - In separate chaining, each cell of the hash table points to a linked list of records that have the same hash function value.
// - Separate chaining is simple, but requires additional memory outside the table.
// - 682->634

// What is Linear Probing?
// - Linear probing is a collision resolution technique in hashing.
// - In linear probing, when a new key is inserted, and the hash value is already occupied, then the new key is inserted in the next available slot.
// - Linear probing is simple, but it causes clustering.
// h(k) = k % m  0<=i<=9
// (h(k) + i) % m
// h(634) = (4+0) % 10 = 4
// h(634) = (4+1) % 10 = 5
// h(634) = (4+2) % 10 = 6

// What is Quadratic Probing?
// - Quadratic probing is a collision resolution technique in hashing.
// - In quadratic probing, when a new key is inserted, and the hash value is already occupied, then the new key is inserted in the next available slot.
// - Quadratic probing is better than linear probing because it reduces clustering.
// h(k) = k % m  0<=i<=9
// (h(k) + i^2) % m
// h(634) = (4+0^2) % 10 = 4
// h(634) = (4+1^2) % 10 = 5

// What is Double Hashing?
// - Double hashing is a collision resolution technique in hashing. 
// - In double hashing, when a new key is inserted, and the hash value is already occupied, then the new key is inserted in the next available slot.
// h(k) = k % m  0<=i<=9
// (h(k) + i * h'(k)) % m
// h(634) = (4+0*4) % 10 = 4
// h(634) = (4+1*4) % 10 = 8

// What is Load Factor?
// - Load factor is the ratio of the number of elements to the number of slots in the hash table.
// - Load factor = Number of elements / Number of slots
// - Load factor is used to measure the performance of the hash table.
// - Load factor is used to decide when to rehash the hash table.

// What is Rehashing?
// - Rehashing is the process of increasing the size of the hash table when the load factor exceeds the threshold value.
// - Rehashing is done to reduce the collision and improve the performance of the hash table.