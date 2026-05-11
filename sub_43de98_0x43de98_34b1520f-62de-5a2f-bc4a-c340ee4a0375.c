// ============================================================
// 函数名称: sub_43de98
// 虚拟地址: 0x43de98
// WARP GUID: 34b1520f-62de-5a2f-bc4a-c340ee4a0375
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_440d6c, sub_4106bc
// [被调用的父级函数]: sub_43df28
// ============================================================

int32_t __convention("regparm")sub_43de98(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = sub_4106bc(arg1)
    int32_t result = sub_4106bc(arg1)
    
    if (arg1[2] != 0)
        return result
    
    return sub_440d6c(arg1[4])
}
