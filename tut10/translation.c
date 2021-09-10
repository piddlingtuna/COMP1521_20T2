#include <stdlib.h>
#include <stdint.h>

#define PAGE_SIZE 4096

uint32_t translate(uint32_t process_id, uint32_t virtual_addr) {
    uint32_t pt_size;
    PageInfo *page_table = get_page_table(process_id, &pt_size);
    page_number = virtual_addr / PAGE_SIZE;
    if(page_number < pt_size) {
        uint32_t offset = virtual_addr % PAGE_SIZE;
        return PAGE_SIZE * page_table[page_number].frame + offset;
    }
    // handle illegal memory access
}
