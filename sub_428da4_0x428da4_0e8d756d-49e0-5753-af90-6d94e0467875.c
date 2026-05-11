// ============================================================
// 函数名称: sub_428da4
// 虚拟地址: 0x428da4
// WARP GUID: 0e8d756d-49e0-5753-af90-6d94e0467875
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_40276c, sub_4103fc
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_428da4(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx_1 = arg1[2] - 1
    int32_t ebx_1 = arg1[2] - 1
    
    if (ebx_1 s>= 0)
        int32_t i_1 = ebx_1 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            sub_40276c(sub_410524(arg1, esi_1))
            esi_1 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return sub_4103fc(arg1)
}
