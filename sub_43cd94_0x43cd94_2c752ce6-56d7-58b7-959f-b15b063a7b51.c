// ============================================================
// 函数名称: sub_43cd94
// 虚拟地址: 0x43cd94
// WARP GUID: 2c752ce6-56d7-58b7-959f-b15b063a7b51
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_43c480, sub_43ccd8, sub_439f30, sub_43be3c, sub_43c950
// [被调用的父级函数]: sub_445408, sub_43d934
// ============================================================

int32_t __convention("regparm")sub_43cd94(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = 1
    sub_43ccd8(arg1)
    
    if ((arg1[8].b & 0x10) == 0 && sub_403248(arg1, 0x438e1c) != 0)
        sub_43be3c(arg1[0xa])
    
    return 0
}
