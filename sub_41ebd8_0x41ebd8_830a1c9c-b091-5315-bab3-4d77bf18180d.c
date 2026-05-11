// ============================================================
// 函数名称: sub_41ebd8
// 虚拟地址: 0x41ebd8
// WARP GUID: 830a1c9c-b091-5315-bab3-4d77bf18180d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_402d00, sub_419e18, sub_41e6c8, sub_41e5a0, sub_4128f8, sub_41e2e0
// [被调用的父级函数]: sub_41e57c, sub_41e6a0
// ============================================================

int32_t __convention("regparm")sub_41ebd8(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: sub_41e2e0(arg1)
    sub_41e2e0(arg1)
    
    if (arg3 == 0)
        void var_62
        sub_402d00(&var_62, 0x54, 0)
        return sub_41e5a0(arg1, 0, 0, nullptr, 0, &var_62)
    
    int16_t var_70
    sub_4128f8(arg2, &var_70, 0xe)
    
    if (var_70 == 0x4d42)
        return sub_41e6c8(arg1, arg2, arg3 - 0xe)
    
    sub_419e18()
    noreturn
}
