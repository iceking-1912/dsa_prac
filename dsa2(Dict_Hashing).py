def display_hash(hashTable): 
    for i in range(len(hashTable)): 
        print(i, end=" ") 
        for j in hashTable[i]: 
            print("-->", end=" ") 
            print(j, end=" ") 
        print() 
 
class ChainingHashTable: 
    def __init__(self, size): 
        self.size = size 
        self.table = [[] for _ in range(size)] 
 
    def hash_function(self, keyvalue): 
        return keyvalue % self.size 
 
    def insert(self, keyvalue, value): 
        hash_key = self.hash_function(keyvalue) 
        self.table[hash_key].append((keyvalue, value)) 
 
    def find(self, keyvalue): 
        hash_key = self.hash_function(keyvalue) 
        for key, value in self.table[hash_key]: 
            if key == keyvalue: 
                return value 
        return None 
 
    def delete(self, keyvalue): 
        hash_key = self.hash_function(keyvalue) 
        for i, (key, value) in enumerate(self.table[hash_key]): 
            if key == keyvalue: 
                del self.table[hash_key][i] 
                return 
 
def main(): 
    hash_table = ChainingHashTable(10) 
 
    hash_table.insert(5, 'Sam') 
    hash_table.insert(45, 'Sid') 
    hash_table.insert(67, 'Kat') 
    hash_table.insert(9, 'Adi') 
    hash_table.insert(23, 'Sad') 
    hash_table.insert(14, 'Ksh') 
    display_hash(hash_table.table)
if __name__ == "__main__":main()