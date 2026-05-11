// ============================================================
// 函数名称: sub_4a22e0
// 虚拟地址: 0x4a22e0
// WARP GUID: c4bb99f6-4541-5754-ae70-83ea5694fa56
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_408ad8, sub_40cc98
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4a22e0(void* arg1, char* arg2)
{
    // 第一条实际指令: if (sub_408ad8(arg2, *(arg1 + 0x10)) == 0)
    if (sub_408ad8(arg2, *(arg1 + 0x10)) == 0)
        sub_40cc98(arg1 + 4)
    
    return sub_403e4c(arg1 + 0x10, arg2)
}
