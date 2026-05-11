// ============================================================
// 函数名称: sub_415df8
// 虚拟地址: 0x415df8
// WARP GUID: 7536a08c-bce3-5433-85bc-bc7f875c9bec
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030a0, sub_415df8, sub_410580, sub_4103c8
// [被调用的父级函数]: sub_43d360, sub_43c1e8, sub_4a8048, sub_4a8030, sub_4a597c, sub_42abf0, sub_4a9430, sub_4936dc, sub_436724, sub_443d04, sub_42b730, sub_4b08d0, sub_443ce0, sub_415df8, sub_443d2c, sub_4b4efc, sub_4367ac, sub_423cac, sub_43bd98
// ============================================================

int32_t __convention("regparm")sub_415df8(void* arg1, void* arg2)
{
    // 第一条实际指令: void* esi = arg2
    void* esi = arg2
    int32_t result = *(arg1 + 4)
    
    if (result == 0 || result != *(esi + 4))
        if (*(arg1 + 0x14) == 0)
            arg2.b = 1
            int32_t ecx
            *(arg1 + 0x14) = sub_4030a0(ecx, arg2)
        
        result = sub_410580(*(arg1 + 0x14), esi)
        
        if (result s< 0)
            sub_4103c8(*(arg1 + 0x14), esi)
            result = sub_415df8()
    
    *(arg1 + 0x20) |= 0x100
    return result
}
