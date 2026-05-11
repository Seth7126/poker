// ============================================================
// 函数名称: sub_42e618
// 虚拟地址: 0x42e618
// WARP GUID: 209b2617-8e14-5e55-a74b-17f56befd233
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42a224, sub_403248
// [被调用的父级函数]: sub_42e6ac
// ============================================================

void __convention("regparm")sub_42e618(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 
    
    if (sub_403248(arg2, 0x427f2c) == 0)
        sub_42a224(arg1 + 0x134, arg2)
    else
        sub_42a224(arg1 + 0x180, arg2)
        sub_42a224(arg1 + 0x16c, arg2)
    
    arg2[9] = arg1
}
