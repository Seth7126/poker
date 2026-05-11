// ============================================================
// 函数名称: sub_4d0148
// 虚拟地址: 0x4d0148
// WARP GUID: 9eac7121-42a9-5801-b959-45199f72f3b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4c2d7c, sub_403010
// [被调用的父级函数]: sub_4d1324, sub_4d4f84, sub_4d5577
// ============================================================

int32_t __convention("regparm")sub_4d0148(int32_t arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg2 == 9 || arg2 == 0xa || arg3 != 0)
        if (arg1 s<= 0x21)
            return mods.dp.d(sx.q(arg1), 0x21)
        
        if (arg1 s<= 0x42)
            return mods.dp.d(sx.q(arg1), 0x21)
        
        if (arg2 s> 1 && arg2 s< *data_5300d0)
            if (add_overflow(arg2, 1))
                sub_403010()
                noreturn
            
            if (sub_4c2d7c(arg2 + 1) != 0)
                return mods.dp.d(sx.q(arg1), 0x21)
        
        result = arg1 - 0x42
        
        if (add_overflow(arg1, 0xffffffbe))
            sub_403010()
            noreturn
    else
        if (arg1 s<= 0x42)
            return mods.dp.d(sx.q(arg1), 0x42)
        
        if (arg1 s<= 0x84)
            return mods.dp.d(sx.q(arg1), 0x42)
        
        result = arg1 - 0x84
        
        if (add_overflow(arg1, 0xffffff7c))
            sub_403010()
            noreturn
    
    return result
}
