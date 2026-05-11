// ============================================================
// 函数名称: sub_4475f4
// 虚拟地址: 0x4475f4
// WARP GUID: 0f47e023-5107-5aa7-9847-b4440c21acb2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4473f4, sub_403e4c
// [被调用的父级函数]: sub_42d8f4, sub_42feb8, sub_42ffa4
// ============================================================

int32_t __convention("regparm")sub_4475f4(struct _EXCEPTION_REGISTRATION_RECORD* arg1, char** arg2)
{
    // 第一条实际指令: sub_4473f4(arg1)
    sub_4473f4(arg1)
    return sub_403e4c(arg2, arg1->__offset(0x2c).d)
}
