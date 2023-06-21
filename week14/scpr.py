class Node:
    def __init__(self, page_number, reference_bit):
        self.page_number = page_number
        self.reference_bit = reference_bit
        self.next = None

class SecondChance:
    def __init__(self):
        self.head = None
        self.tail = None

    def replace_page(self, new_page_number):
        if self.head is None:
            new_node = Node(new_page_number, 0)
            self.head = new_node
            self.tail = new_node
        else:
            temp = self.head
            while temp:
                if temp.reference_bit == 1:
                    temp.reference_bit = 0
                    temp = temp.next
                else:
                    temp.page_number = new_page_number
                    break

            if temp is None:
                new_node = Node(new_page_number, 0)
                self.tail.next = new_node
                self.tail = new_node

    def access_page(self, page_number):
        temp = self.head
        while temp:
            if temp.page_number == page_number:
                temp.reference_bit = 1
                break
            temp = temp.next

        if temp is None:
            self.replace_page(page_number)


def main():
    cache = SecondChance()
    page_sequence = [7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1]
    for page in page_sequence:
        print(f"Accessing page {page}")
        cache.access_page(page)
        temp = cache.head
        print("Current pages in cache: ", end="")
        while temp:
            print(temp.page_number, end=" ")
            temp = temp.next
        print("\n")

if __name__ == "__main__":
    main()
