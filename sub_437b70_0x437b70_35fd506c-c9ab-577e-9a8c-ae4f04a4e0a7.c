// ============================================================
// 函数名称: sub_437b70
// 虚拟地址: 0x437b70
// WARP GUID: 35fd506c-c9ab-577e-9a8c-ae4f04a4e0a7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_437988, sub_437a48, sub_43709c
// ============================================================

void __convention("regparm")sub_437b70(int32_t* arg1, char arg2)
{
    // 第一条实际指令: if (arg2 == arg1[0xd].b)
    if (arg2 == arg1[0xd].b)
        return 
    
    arg1[0xd].b = arg2
    int32_t ebx
    ebx.w = 0xfff0
    sub_4032ac(arg1)
}
