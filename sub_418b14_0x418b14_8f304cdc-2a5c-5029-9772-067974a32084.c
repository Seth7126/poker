// ============================================================
// 函数名称: sub_418b14
// 虚拟地址: 0x418b14
// WARP GUID: 8f304cdc-2a5c-5029-9772-067974a32084
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404054, sub_402d00, sub_418884, sub_402bdc, sub_41889c
// [被调用的父级函数]: sub_4807f4
// ============================================================

void __convention("regparm")sub_418b14(void* arg1, void* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    void var_134
    sub_418884(arg1, &var_134)
    void var_129
    sub_402d00(&var_129, 0x20, 0)
    char var_108[0x100]
    sub_404054(&var_108, arg2, 0xff)
    sub_402bdc(&var_129, &var_108, 0x1f)
    sub_41889c(arg1, &var_134)
}
