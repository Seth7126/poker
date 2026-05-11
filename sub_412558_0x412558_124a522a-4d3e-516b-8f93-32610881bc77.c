// ============================================================
// 函数名称: sub_412558
// 虚拟地址: 0x412558
// WARP GUID: 124a522a-4d3e-516b-8f93-32610881bc77
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403e4c, sub_4117ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412558(void* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: if (arg2 s>= 0 && arg2 s< *(arg1 + 0x10))
    if (arg2 s>= 0 && arg2 s< *(arg1 + 0x10))
        return sub_403e4c(arg3, *(*(arg1 + 0xc) + (arg2 << 3)))
    
    sub_4117ac(arg2, data_5307e4)
    noreturn
}
