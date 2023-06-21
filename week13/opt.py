def optimal_page_replacement(pages, size):
    memory = []
    page_faults = 0

    for i in range(len(pages)):
        if pages[i] not in memory:
            if len(memory) == size:
                furthest_used = 0
                for j in range(size):
                    if memory[j] not in pages[i+1:]:
                        furthest_used = j
                        break
                    if pages[i+1:].index(memory[j]) > pages[i+1:].index(memory[furthest_used]):
                        furthest_used = j

                memory[furthest_used] = pages[i]
            else:
                memory.append(pages[i])
            page_faults += 1
            print(memory)

    return page_faults


pages = [7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2, 1, 2, 0 , 1, 7, 0, 1]
size = 3
print("OPT")
print(optimal_page_replacement(pages, size), "page faults.")
