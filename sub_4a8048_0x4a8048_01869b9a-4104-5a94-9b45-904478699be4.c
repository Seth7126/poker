// ============================================================
// 函数名称: sub_4a8048
// 虚拟地址: 0x4a8048
// WARP GUID: 01869b9a-4104-5a94-9b45-904478699be4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_415df8, sub_40cc98, sub_403248
// [被调用的父级函数]: sub_4a751c, sub_4a74c0
// ============================================================

int32_t* __convention("regparm")sub_4a8048(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x74) != 0 && *(arg1 + 0x68) != 0)
    if (*(arg1 + 0x74) != 0 && *(arg1 + 0x68) != 0)
        sub_40cc98(arg1 + 0x74)
        *(arg1 + 0x68) = 0
    
    if (arg2 == 0)
        *(arg1 + 0xa4) = 0
    else if (sub_403248(arg2, &data_4a8d90) == 0)
        *(arg1 + 0xa4) = 0
    else
        *(arg1 + 0xa4) = arg2
    
    *(arg1 + 0x74) = arg2
    
    if (arg2 == 0)
        return arg2
    
    return sub_415df8(arg2, arg1)
}
