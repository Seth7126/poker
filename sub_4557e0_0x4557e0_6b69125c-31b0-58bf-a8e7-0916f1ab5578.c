// ============================================================
// 函数名称: sub_4557e0
// 虚拟地址: 0x4557e0
// WARP GUID: 6b69125c-31b0-58bf-a8e7-0916f1ab5578
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_455a10, sub_455a20
// [被调用的父级函数]: sub_45591c, sub_4558e4
// ============================================================

int32_t* __convention("regparm")sub_4557e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1[1]
    void* esi = arg1[1]
    
    if (arg2 s< 0 || arg2 s>= 2)
        void* eax = *arg1
        *(eax + 0x14) = 0xc
        *(eax + 0x18) = arg2
        (**arg1)(arg2)
    
    if (arg2 == 1)
        for (void* i = *(esi + 0x40); i != 0; i = *(i + 0x2c))
            if (*(i + 0x28) != 0)
                *(i + 0x28) = 0
                (*(i + 0x38))(arg2)
        
        *(esi + 0x40) = 0
        
        for (void* i_1 = *(esi + 0x44); i_1 != 0; i_1 = *(i_1 + 0x2c))
            if (*(i_1 + 0x28) != 0)
                *(i_1 + 0x28) = 0
                (*(i_1 + 0x38))(arg2)
        
        *(esi + 0x44) = 0
    
    int32_t* i_2 = *(esi + (arg2 << 2) + 0x38)
    *(esi + (arg2 << 2) + 0x38) = 0
    int32_t* i_4
    
    for (; i_2 != 0; i_2 = i_4)
        i_4 = *i_2
        int32_t ebx_3 = i_2[1] + i_2[2] + 0xc
        sub_455a20(ebx_3, i_2)
        *(esi + 0x48) -= ebx_3
    
    int32_t* i_3 = *(esi + (arg2 << 2) + 0x30)
    *(esi + (arg2 << 2) + 0x30) = 0
    int32_t* i_5
    
    for (; i_3 != 0; i_3 = i_5)
        i_5 = *i_3
        int32_t ebx_6 = i_3[1] + i_3[2] + 0xc
        sub_455a10(ebx_6, i_3)
        *(esi + 0x48) -= ebx_6
    
    return i_3
}
