// ============================================================
// 函数名称: sub_4970c0
// 虚拟地址: 0x4970c0
// WARP GUID: 0cdac207-3431-52fd-ba6d-09b10bb5f009
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: select
// [内部子函数调用]: sub_493bc4, sub_49611c, sub_493bd4, sub_415c58
// [被调用的父级函数]: 无
// ============================================================

void __convention("regparm")sub_4970c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    void var_110
    void* esi = &var_110
    
    while (ebx[3].b == 0)
        if (ebx[0xc][2].b == 0)
            break
        
        sub_493bd4(esi)
        sub_493bc4(*(ebx[0xc] + 4), esi)
        int32_t var_118 = 0
        int32_t var_114_1 = 0x1f4
        
        if (select(0, esi, 0, 0, &var_118) s> 0 && ebx[3].b == 0)
            arg1, esi = sub_49611c(ebx[0xc], esi, 0xffffffff)
            
            if (arg1 == 0)
                break
            
            sub_415c58(ebx, sub_496f2c, ebx)
        
        if (select(0, 0, esi, 0, &var_118) s> 0 && ebx[3].b == 0)
            sub_415c58(ebx, sub_496f54, ebx)
}
