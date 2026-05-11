// ============================================================
// 函数名称: sub_507d4c
// 虚拟地址: 0x507d4c
// WARP GUID: baa1111f-c8f8-5a28-b145-49f00a02f1df
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_46910c
// [被调用的父级函数]: sub_4e6659, sub_513ae4, sub_50b624, sub_508844, sub_4d4f84, sub_4d5577, sub_509a28, sub_4e649b
// ============================================================

void** __convention("regparm")sub_507d4c(int32_t* arg1)
{
    // 第一条实际指令: sub_46910c(*data_530304, "f_netzwerkspiel", arg1)
    sub_46910c(*data_530304, "f_netzwerkspiel", arg1)
    void** result = *data_5301f4
    
    if (*(result + 0x111fa) == 0)
        return result
    
    return sub_46910c(*data_530304, "f_internetspiel", arg1)
}
