class Node:
    def __init__(self, page_number, reference_bit, modify_bit):
        self.page_number = page_number
        self.reference_bit = reference_bit
        self.modify_bit = modify_bit
        self.next = None

class SecondChance:
    def __init__(self):
        self.head = None
        self.tail = None

    def replace_page(self, new_page_number):
        if self.head is None:
            new_node = Node(new_page_number, 0, 0)
            self.head = new_node
            self.tail = new_node
        else:
            min_priority = 3
            min_priority_node = None
            temp = self.head
            while temp:
                priority = 2*temp.reference_bit + temp.modify_bit
                if priority < min_priority:
                    min_priority = priority
                    min_priority_node = temp
                temp = temp.next
            if min_priority_node is not None:
                min_priority_node.page_number = new_page_number
                min_priority_node.reference_bit = 0
                min_priority_node.modify_bit = 0

    def access_page(self, page_number, modified):
        temp = self.head
        while temp:
            if temp.page_number == page_number:
                temp.reference_bit = 1
                temp.modify_bit = max(temp.modify_bit, modified)
                return
            temp = temp.next
        self.replace_page(page_number)
        
def main():
    cache = SecondChance()
    page_sequence = [(1, 0), (2, 1), (3, 0), (1, 0), (4, 1), (1, 0), (5, 1), (2, 0), (1, 0), (6, 1), (2, 0), (3, 1)]
    for page, modified in page_sequence:
        print(f"Accessing page {page}")
        cache.access_page(page, modified)
        temp = cache.head
        print("Current pages in cache: ", end="")
        while temp:
            print(f"{temp.page_number}({temp.reference_bit},{temp.modify_bit})", end=" ")
            temp = temp.next
        print("\n")

if __name__ == "__main__":
    main()
