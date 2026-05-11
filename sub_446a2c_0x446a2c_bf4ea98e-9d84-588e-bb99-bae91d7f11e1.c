// ============================================================
// 函数名称: sub_446a2c
// 虚拟地址: 0x446a2c
// WARP GUID: bf4ea98e-9d84-588e-bb99-bae91d7f11e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: IsEqualGUID
// [内部子函数调用]: sub_4164b4, sub_405b58
// [被调用的父级函数]: 无
// ============================================================

int32_t __stdcallsub_446a2c(int32_t* arg1, struct _EXCEPTION_REGISTRATION_RECORD* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (IsEqualGUID(arg2, 0x446a80) == 0 && IsEqualGUID(arg2, 0x446a90) == 0)
    if (IsEqualGUID(arg2, 0x446a80) == 0 && IsEqualGUID(arg2, 0x446a90) == 0)
        return sub_4164b4(arg1, arg2, arg3)
    
    sub_405b58(arg3, arg1[0x8e])
    return 0
}
