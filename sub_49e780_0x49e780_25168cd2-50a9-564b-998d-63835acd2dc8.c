// ============================================================
// 函数名称: sub_49e780
// 虚拟地址: 0x49e780
// WARP GUID: 25168cd2-50a9-564b-998d-63835acd2dc8
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_49e6e0
// [被调用的父级函数]: sub_4ace9c
// ============================================================

int32_t __convention("regparm")sub_49e780(char* arg1)
{
    // 第一条实际指令: if ((data_52fba0() == 0 || *arg1 != 0x2e) && sub_49e6e0(arg1) == 0)
    if ((data_52fba0() == 0 || *arg1 != 0x2e) && sub_49e6e0(arg1) == 0)
        return 1
    
    return 0
}
