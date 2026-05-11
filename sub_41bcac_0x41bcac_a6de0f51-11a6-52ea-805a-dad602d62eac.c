// ============================================================
// 函数名称: sub_41bcac
// 虚拟地址: 0x41bcac
// WARP GUID: a6de0f51-11a6-52ea-805a-dad602d62eac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410b1c, sub_41baf4, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41bcac(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        sub_41baf4(arg1, nullptr)
        return 0
    
    if (sub_403248(arg2, 0x4177d8) != 0)
        return sub_41baf4(arg1, arg2[1])
    
    int32_t ecx
    
    if (sub_403248(arg2, 0x4176f4) == 0)
        return sub_410b1c(ecx, arg2)
    return sub_41baf4(arg1, arg2)
}
