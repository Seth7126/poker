// ============================================================
// 函数名称: sub_42c788
// 虚拟地址: 0x42c788
// WARP GUID: f50d70df-171f-5208-abc7-7caa4eab89f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_42cf3c, sub_42bdf4, sub_42c2ec
// ============================================================

void* __convention("regparm")sub_42c788(int32_t* arg1)
{
    // 第一条实际指令: void* eax_1 = (*(*arg1 + 0x50))()
    void* eax_1 = (*(*arg1 + 0x50))()
    
    if (eax_1.b != 0)
        arg1[0x26] = arg1[0xf]
        int32_t eax_3 = arg1[0xe]
        arg1[0x25] = eax_3
        return eax_3
    
    if (arg1[0x24] != 0)
        void* eax_4
        
        if (arg1[0x23].b != 2)
            eax_4.b = *(arg1[0x24] + 0x4b)
        
        if (arg1[0x23].b != 2 && eax_4.b - 1 u>= 2)
            char temp1_1
            
            if (arg1[0x23].b != 1)
                eax_1.b = *(arg1[0x24] + 0x4b)
                eax_1.b -= 3
                temp1_1 = eax_1.b
                eax_1.b -= 2
            
            if (arg1[0x23].b == 1 || temp1_1 u< 2)
                eax_1 = arg1[0xe]
                arg1[0x27] = eax_1
        else
            eax_1 = arg1[0xf]
            arg1[0x28] = eax_1
    
    return eax_1
}
