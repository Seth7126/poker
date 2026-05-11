// ============================================================
// 函数名称: sub_4c0cbc
// 虚拟地址: 0x4c0cbc
// WARP GUID: 199a1549-5acb-5e47-898b-90e1bddb8e31
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_404138, sub_408e1c, sub_40401c, sub_46910c, sub_403e1c
// [被调用的父级函数]: sub_5223e8, sub_51fdc8
// ============================================================

int32_t __convention("regparm")sub_4c0cbc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ esi, int32_t arg5 @ edi, char* arg6)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t i_2 = arg3
    int32_t* esp = &i_2
    int32_t i_1 = 0xb
    int32_t i
    
    do
        *(esp - 4) = 0
        *(esp - 8) = 0
        esp -= 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    int32_t i_3 = i_2
    i_2 = i_1
    int32_t entry_ebx
    *(esp - 4) = entry_ebx
    *(esp - 8) = arg4
    *(esp - 0xc) = arg5
    i_2 = arg2
    *(esp - 0x10) = &var_4
    *(esp - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp - 0x18) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp - 0x18
    int32_t ecx_2
    void* esp_11
    void* ebp_1
    
    if (arg1 == 1)
        void var_10
        ebp_1 = sub_46910c(*data_530304, "f_p1", &var_10)
        *(esp - 0x1c) = *(ebp_1 - 0xc)
        sub_408e1c(*(ebp_1 - 4), ebp_1 - 0x10)
        *(esp - 0x20) = *(ebp_1 - 0x10)
        *(esp - 0x24) = 0
        sub_404138(ebp_1 - 8, 3)
        esp_11 = esp - 0x18
        ecx_2 = sub_404054(arg6, *(ebp_1 - 8), 0xff)
    else if (arg1 == 2)
        void var_1c
        ebp_1 = sub_46910c(*data_530304, "f_p2", &var_1c)
        *(esp - 0x1c) = *(ebp_1 - 0x18)
        sub_408e1c(*(ebp_1 - 4), ebp_1 - 0x1c)
        *(esp - 0x20) = *(ebp_1 - 0x1c)
        *(esp - 0x24) = 0
        sub_404138(ebp_1 - 0x14, 3)
        esp_11 = esp - 0x18
        ecx_2 = sub_404054(arg6, *(ebp_1 - 0x14), 0xff)
    else if (arg1 != 3)
        int32_t var_34
        sub_408e1c(arg1, &var_34)
        *(esp - 0x1c) = var_34
        void var_38
        ebp_1 = sub_46910c(*data_530304, "f_platzvon", &var_38)
        *(esp - 0x20) = *(ebp_1 - 0x34)
        sub_408e1c(*(ebp_1 - 4), ebp_1 - 0x38)
        *(esp - 0x24) = *(ebp_1 - 0x38)
        *(esp - 0x28) = 0
        sub_404138(ebp_1 - 0x2c, 4)
        esp_11 = esp - 0x1c
        ecx_2 = sub_404054(arg6, *(ebp_1 - 0x2c), 0xff)
    else
        void var_28
        ebp_1 = sub_46910c(*data_530304, "f_p3", &var_28)
        *(esp - 0x1c) = *(ebp_1 - 0x24)
        sub_408e1c(*(ebp_1 - 4), ebp_1 - 0x28)
        *(esp - 0x20) = *(ebp_1 - 0x28)
        *(esp - 0x24) = 0
        sub_404138(ebp_1 - 0x20, 3)
        esp_11 = esp - 0x18
        ecx_2 = sub_404054(arg6, *(ebp_1 - 0x20), 0xff)
    
    void* esp_26
    void* ebp_2
    
    if (i_3 == 1)
        sub_40401c(ecx_2, arg6)
        *(esp_11 - 4) = *(ebp_1 - 0x40)
        *(esp_11 - 8) = &data_4c0f84
        ebp_2 = sub_46910c(*data_530304, "f_anfaenger", ebp_1 - 0x44)
        *(esp_11 - 0xc) = *(ebp_2 - 0x44)
        *(esp_11 - 0x10) = &data_4c0fa4
        sub_404138(ebp_2 - 0x3c, 4)
        esp_26 = esp_11 - 4
        sub_404054(arg6, *(ebp_2 - 0x3c), 0xff)
    else if (i_3 != 2)
        sub_40401c(ecx_2, arg6)
        *(esp_11 - 4) = *(ebp_1 - 0x58)
        *(esp_11 - 8) = &data_4c0f84
        ebp_2 = sub_46910c(*data_530304, "f_profi", ebp_1 - 0x5c)
        *(esp_11 - 0xc) = *(ebp_2 - 0x5c)
        *(esp_11 - 0x10) = &data_4c0fa4
        sub_404138(ebp_2 - 0x54, 4)
        esp_26 = esp_11 - 4
        sub_404054(arg6, *(ebp_2 - 0x54), 0xff)
    else
        sub_40401c(ecx_2, arg6)
        *(esp_11 - 4) = *(ebp_1 - 0x4c)
        *(esp_11 - 8) = &data_4c0f84
        ebp_2 = sub_46910c(*data_530304, "f_normal", ebp_1 - 0x50)
        *(esp_11 - 0xc) = *(ebp_2 - 0x50)
        *(esp_11 - 0x10) = &data_4c0fa4
        sub_404138(ebp_2 - 0x48, 4)
        esp_26 = esp_11 - 4
        sub_404054(arg6, *(ebp_2 - 0x48), 0xff)
    
    *(esp_26 + 8)
    fsbase->NtTib.ExceptionList = *esp_26
    *(esp_26 + 8) = sub_4c0f2f
    return sub_403e1c(ebp_2 - 0x5c, 0x16)
}
