// ============================================================
// 函数名称: sub_4421f4
// 虚拟地址: 0x4421f4
// WARP GUID: 7b051d49-a9c9-5302-a93f-4b8043259da7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_441400, sub_42fb14
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4421f4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg2 + 8) == 0 && *(arg1[0x7d] + 0x1c) != 0)
    if (*(arg2 + 8) == 0 && *(arg1[0x7d] + 0x1c) != 0)
        return sub_441400(arg1[0x7d], arg2)
    
    return sub_42fb14(arg1, arg2)
}
