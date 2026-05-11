// ============================================================
// 函数名称: sub_405b58
// 虚拟地址: 0x405b58
// WARP GUID: 5bdc94ba-66ee-5a8a-baac-1628b063e00e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_403134, sub_403164, sub_4908c8, sub_431b5c, sub_404a88, sub_446a2c, sub_490ef8, sub_40496c, sub_430298, sub_412120, sub_430304
// ============================================================

void __convention("regparm")sub_405b58(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ecx = *arg1
    int32_t* ecx = *arg1
    *arg1 = arg2
    
    if (arg2 != 0)
        (*(*arg2 + 4))(arg2)
    
    if (ecx != 0)
        (*(*ecx + 8))(ecx)
}
