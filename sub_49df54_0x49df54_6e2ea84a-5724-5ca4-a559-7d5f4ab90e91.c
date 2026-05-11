// ============================================================
// 函数名称: sub_49df54
// 虚拟地址: 0x49df54
// WARP GUID: 6e2ea84a-5724-5ca4-a559-7d5f4ab90e91
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404078, sub_404188, sub_403e4c, sub_49de5c, sub_404364, sub_403df8, sub_404280, sub_403010
// [被调用的父级函数]: sub_4a22af, sub_49d2b9, sub_49e6e0, sub_4b0b67, sub_4b0914, sub_49d474, sub_49b454, sub_4a0e13, sub_49d4fc, sub_4a2310, sub_49cb30, sub_4ad27c, sub_4a2b90, sub_49d3ec, sub_4b1160, sub_49f368
// ============================================================

char** __fastcallsub_49df54(int32_t arg1, void* arg2, int32_t* arg3 @ eax, char** arg4, char arg5)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    var_8:3.b = arg1.b
    
    if (arg5 == 0)
        arg1.b = var_8:3.b
        return sub_49de5c(arg3, arg2, arg1.b, arg4)
    
    sub_404188(arg2, 0x49e014)
    int32_t edi_1
    
    if (arg5 != 0)
        *arg3
        edi_1 = data_52fba0()
    else
        edi_1 = sub_404364(arg2, *arg3)
    
    char** result
    
    if (edi_1 != 0)
        if (add_overflow(edi_1, 0xffffffff))
            sub_403010()
            noreturn
        
        result = sub_404280(edi_1 - 1, 1, *arg3, arg4)
        
        if (var_8:3.b != 0)
            int32_t eax_9 = sub_404078(arg2)
            
            if (not(add_overflow(eax_9, edi_1)))
                return sub_404280(0x7fffffff, eax_9 + edi_1, *arg3, arg3)
            
            sub_403010()
            noreturn
    else
        result = sub_403e4c(arg4, *arg3)
        
        if (var_8:3.b != 0)
            result = arg3
            sub_403df8(result)
    
    return result
}
