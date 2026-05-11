// ============================================================
// 函数名称: sub_412474
// 虚拟地址: 0x412474
// WARP GUID: 3657ebcd-d26d-595c-bcd8-3b093ef36aa9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4124cc, sub_4117ac
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_412474(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg2 s< 0 || arg2 s>= arg1[4])
    if (arg2 s< 0 || arg2 s>= arg1[4])
        sub_4117ac(arg2, data_5307e4)
        noreturn
    
    if (arg3 s< 0 || arg3 s>= arg1[4])
        sub_4117ac(arg3, data_5307e4)
        noreturn
    
    (*(*arg1 + 0x74))()
    sub_4124cc(arg1, arg2, arg3)
    return (*(*arg1 + 0x70))()
}
