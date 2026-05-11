// ============================================================
// 函数名称: sub_42a5d8
// 虚拟地址: 0x42a5d8
// WARP GUID: e2bad68c-e138-55c3-9573-0bcf22d64a5e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_42a5d8(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    
    if (arg2 u< 1)
        if (arg3 != arg1[2])
            arg1[2] = arg3
            
            if (arg3 u> 0 && arg3 u< arg1[4])
                arg1[4] = arg3
            
            ebx.w = 0xfffd
            sub_4032ac(arg1)
    else if (arg2 == 1)
        if (arg3 != arg1[3])
            arg1[3] = arg3
            
            if (arg3 u> 0 && arg3 u< arg1[5])
                arg1[5] = arg3
            
            ebx.w = 0xfffd
            sub_4032ac(arg1)
    else if (arg2 == 2)
        if (arg3 != arg1[4])
            arg1[4] = arg3
            int32_t eax_4 = arg1[2]
            
            if (eax_4 u> 0 && eax_4 u< arg3)
                arg1[2] = arg3
            
            ebx.w = 0xfffd
            sub_4032ac(arg1)
    else if (arg2 == 3 && arg3 != arg1[5])
        arg1[5] = arg3
        int32_t eax_7 = arg1[3]
        
        if (eax_7 u> 0 && eax_7 u< arg3)
            arg1[3] = arg3
        
        ebx.w = 0xfffd
        sub_4032ac(arg1)
}
