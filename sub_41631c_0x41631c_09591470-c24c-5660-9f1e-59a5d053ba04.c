// ============================================================
// 函数名称: sub_41631c
// 虚拟地址: 0x41631c
// WARP GUID: 09591470-c24c-5660-9f1e-59a5d053ba04
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410524, sub_4104b0
// [被调用的父级函数]: sub_4163ac, sub_443850, sub_443028, sub_4430c0
// ============================================================

int32_t __convention("regparm")sub_41631c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x10) != 0)
    if (*(arg1 + 0x10) != 0)
        return sub_410524(*(arg1 + 0x10), arg2)
    
    sub_4104b0(arg2, data_5307e4)
    noreturn
}
