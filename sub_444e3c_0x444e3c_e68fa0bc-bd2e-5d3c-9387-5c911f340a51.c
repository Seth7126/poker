// ============================================================
// 函数名称: sub_444e3c
// 虚拟地址: 0x444e3c
// WARP GUID: e68fa0bc-bd2e-5d3c-9387-5c911f340a51
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_403248, sub_4318d0
// [被调用的父级函数]: sub_444e88, sub_444eb8
// ============================================================

void __convention("regparm")sub_444e3c(LRESULT arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* ebx = arg2
    int32_t* ebx = arg2
    
    if (ebx == 0)
        return 
    
    while (true)
        int32_t* esi_1 = ebx[9]
        
        if (esi_1 == 0)
            break
        
        if (sub_403248(ebx, &data_43f580).b != 0)
            break
        
        ebx = esi_1
    
    if (ebx != 0 && arg3 != ebx)
        SendMessageA(sub_4318d0(ebx), arg1, 0, 0)
}
