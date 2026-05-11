// ============================================================
// 函数名称: sub_418b8c
// 虚拟地址: 0x418b8c
// WARP GUID: b9113a7c-607d-523a-a603-e66a7f9e8165
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: MulDiv
// [内部子函数调用]: sub_418ad4
// [被调用的父级函数]: sub_4807f4, sub_4187b0, sub_4476f4, sub_42b3f4, sub_442deb
// ============================================================

int32_t __convention("regparm")sub_418b8c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: MulDiv(arg2, *(arg1 + 0x1c), 0x48)
    MulDiv(arg2, *(arg1 + 0x1c), 0x48)
    return sub_418ad4(arg1)
}
