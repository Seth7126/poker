// ============================================================
// 函数名称: sub_5072b8
// 虚拟地址: 0x5072b8
// WARP GUID: be750354-3076-55a4-8fbb-f8b05dd402a0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_47a9a0, sub_403010, sub_402d20
// [被调用的父级函数]: sub_4e6659, sub_50b624, sub_50732c, sub_50724c, sub_4e649b
// ============================================================

int32_t __fastcallsub_5072b8(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    sub_47a9a0(*data_530444, *data_530438, *data_530304, &var_8)
    
    if (var_8 != 1)
        int32_t eax_4 = sub_402d20(4)
        
        if (not(add_overflow(eax_4, 4)))
            *(*data_5301f4 + 0x111d0) = eax_4 + 4
            return eax_4 + 4
        
        sub_403010()
        noreturn
    
    int32_t eax_2 = sub_402d20(3)
    
    if (not(add_overflow(eax_2, 1)))
        *(*data_5301f4 + 0x111d0) = eax_2 + 1
        return eax_2 + 1
    
    sub_403010()
    noreturn
}
