// ============================================================
// 函数名称: sub_412930
// 虚拟地址: 0x412930
// WARP GUID: f12f85e8-ced5-5211-a242-9a63d4efbcaf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40b56c, sub_403828
// [被调用的父级函数]: sub_49fdd0, sub_4a7e8d, sub_41ca88, sub_41c9fc, sub_411fa0, sub_4a7cd8, sub_412968, sub_41f958, sub_41577c, sub_4a76d4, sub_41f72c, sub_41f1b0, sub_4a80d4
// ============================================================

void __convention("regparm")sub_412930(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 
    
    int32_t edx
    arg1, edx = (*(*arg1 + 8))()
    
    if (arg3 == arg1)
        return 
    
    edx.b = 1
    sub_40b56c(sub_40e812+0x5e, edx, data_5304f8)
    sub_403828()
    noreturn
}
