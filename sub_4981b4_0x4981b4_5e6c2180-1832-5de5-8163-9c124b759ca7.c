// ============================================================
// 函数名称: sub_4981b4
// 虚拟地址: 0x4981b4
// WARP GUID: 5e6c2180-1832-5de5-8163-9c124b759ca7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_403e90, sub_40422c, sub_497fb4, sub_404078, sub_404188, sub_4088f0, sub_40401c, sub_408e80, sub_402bdc, sub_403df8, sub_403e1c, sub_4980b4, sub_403010
// [被调用的父级函数]: sub_4986c7
// ============================================================

void* __convention("regparm")sub_4981b4(void* arg1, char arg2, void* arg3, int32_t arg4 @ esi, int32_t arg5 @ edi)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* i_2 = arg3
    int32_t* esp = &i_2
    void* i_1 = 0x1aa
    void* i
    
    do
        *(esp - 4) = 0
        *(esp - 8) = 0
        esp -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(esp - 4) = i_1
    void* i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp - 8) = entry_ebx
    *(esp - 0xc) = arg4
    *(esp - 0x10) = arg5
    void* i_4 = i_3
    char var_c0d = arg2
    sub_40422c(arg1)
    *(esp - 0x14) = &var_4
    *(esp - 0x18) = j_sub_4037f0
    TEB* fsbase
    *(esp - 0x1c) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp - 0x1c
    int32_t eax_2
    void* ecx_1
    eax_2, ecx_1 = sub_403e90(&i_2, arg1)
    *(esp - 0x20) = &var_4
    eax_2.b = 0x3f
    void var_c28
    void* ebp_1 = sub_497fb4(eax_2, &var_c28, ecx_1)
    *(esp - 0x20)
    void* esp_10 = esp - 0x1c
    void* ecx_3 = sub_403e90(ebp_1 - 0xc14, *(ebp_1 - 0xc24))
    
    if (*(ebp_1 - 0xc09) != 0)
        sub_404054(ebp_1 - 0xd24, *(ebp_1 - 0xc14), 0xff)
        ecx_3 = sub_402bdc(*(ebp_1 - 0xc10) + 0x24, ebp_1 - 0xd24, 0x40)
    
    while (sub_404078(*(ebp_1 - 4)) s> 0)
        *(esp_10 - 4) = ebp_1
        int32_t eax_7
        eax_7.b = 0x3d
        int32_t ebx_1
        void* ebp_2
        ebx_1, ebp_2 = sub_497fb4(eax_7, ebp_1 - 0xd28, ecx_3)
        *(esp_10 - 4)
        int32_t esi = ebx_1 * 0x20
        bool o_1 = unimplemented  {imul esi, ebx, 0x20}
        
        if (o_1)
            sub_403010()
            noreturn
        
        int32_t eax_9
        void* ecx_6
        eax_9, ecx_6 = sub_404054(ebp_2 + (esi << 3) - 0x604, *(ebp_2 - 0xd28), 0xff)
        *(esp_10 - 4) = ebp_2
        eax_9.b = 0x26
        int32_t ebx_2
        ebx_2, ebp_1 = sub_497fb4(eax_9, ebp_2 - 0xd2c, ecx_6)
        ecx_3 = sub_404054(ebp_1 + (esi << 3) - 0xc04, *(ebp_1 - 0xd2c), 0xff)
        
        if (add_overflow(ebx_2, 1))
            sub_403010()
            noreturn
    
    *(esp_10 - 4) = ebp_1
    void* ebp_3 = sub_4980b4(0x49860c, ebp_1 - 0xd24, ecx_3)
    sub_40401c(*(esp_10 - 4), ebp_3 - 0xd24)
    sub_4088f0(*(ebp_3 - 0xc18), ebp_3 - 0xd30)
    void* ecx_8 = sub_404188(*(ebp_3 - 0xd30), "GET_SERVERLIST")
    *(*(ebp_3 - 0xc10) + 7) = 1
    *(esp_10 - 4) = ebp_3
    void* ebp_4 = sub_4980b4(sub_4986c7+0x11, ebp_3 - 0xd24, ecx_8)
    void* ecx_10 = sub_40401c(*(esp_10 - 4), ebp_4 - 0xd24)
    
    if (*(ebp_4 - 0xc09) == 0)
        sub_404054(ebp_4 - 0xd24, *(ebp_4 - 0xc1c), 0xff)
        ecx_10 = sub_402bdc(*(ebp_4 - 0xc10) + 0x24, ebp_4 - 0xd24, 0x40)
    
    *(esp_10 - 4) = ebp_4
    void* ebp_5 = sub_4980b4(0x4986e0, ebp_4 - 0xd24, ecx_10)
    void* ecx_13 = sub_40401c(*(esp_10 - 4), ebp_5 - 0xd24)
    int32_t eax_40 = sub_404078(*(ebp_5 - 0xc20))
    char temp4_1
    
    if (eax_40 == 1)
        char* eax_42
        eax_42.b = **(ebp_5 - 0xc20)
        eax_42.b -= 0x30
        temp4_1 = eax_42.b
        eax_42.b -= 0xa
    
    char ebx_5
    
    if (eax_40 != 1 || temp4_1 u>= 0xa)
        ebx_5 = 0
    else
        *(esp_10 - 4) = ebp_5
        *(esp_10 - 8) = j_sub_40353c
        *(esp_10 - 0xc) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_10 - 0xc
        *(esp_10 - 0x10) = ebp_5
        ebp_5 = sub_4980b4(0x4986e0, ebp_5 - 0xd24, ecx_13)
        sub_40401c(*(esp_10 - 0x10), ebp_5 - 0xd24)
        ebx_5 = sub_408e80(*(ebp_5 - 0xd58))
        *(esp_10 - 4)
        fsbase->NtTib.ExceptionList = *(esp_10 - 0xc)
    
    *(*(ebp_5 - 0xc10) + 0xb) = ebx_5
    **(ebp_5 - 0xc10) = 0x3039
    *(*(ebp_5 - 0xc10) + 0x78) = 0xd431
    *(esp_10 + 8)
    fsbase->NtTib.ExceptionList = *esp_10
    *(esp_10 + 8) = sub_498604
    sub_403e1c(ebp_5 - 0xd58, 0xd)
    sub_403e1c(ebp_5 - 0xc24, 5)
    sub_403df8(ebp_5 - 0xc08)
    sub_403df8(ebp_5 - 4)
    return ebp_5 - 4
}
