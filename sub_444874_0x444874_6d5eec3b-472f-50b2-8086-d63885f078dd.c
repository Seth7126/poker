// ============================================================
// 函数名称: sub_444874
// 虚拟地址: 0x444874
// WARP GUID: 6d5eec3b-472f-50b2-8086-d63885f078dd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: DefFrameProcA, DefWindowProcA
// [内部子函数调用]: sub_42f448, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

LRESULT __convention("regparm")sub_444874(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1[0x8f] == 0)
    if (arg1[0x8f] == 0)
        return sub_42f448(arg1, arg2)
    
    if (*arg2 != 5)
        LRESULT eax_12 = DefFrameProcA(sub_4318d0(arg1), arg1[0x8f], *arg2, arg2[1], arg2[2])
        arg2[3] = eax_12
        return eax_12
    
    LRESULT eax_5 = DefWindowProcA(sub_4318d0(arg1), *arg2, arg2[1], arg2[2])
    arg2[3] = eax_5
    return eax_5
}
