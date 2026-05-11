// ============================================================
// 函数名称: sub_520a04
// 虚拟地址: 0x520a04
// WARP GUID: ffcb7844-18fa-5807-8425-4156a570a25e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cda5c, sub_403df8, sub_408e1c, sub_4040c4
// [被调用的父级函数]: sub_5223e8, sub_520efc
// ============================================================

int32_t* __fastcallsub_520a04(char arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result
    int32_t* result
    
    if (*(*data_5301f4 + 4) != 7)
        result = sub_408e1c(arg2, arg3)
        
        if (arg2 s> 0)
            result = sub_4040c4(arg3, U"+", *arg3)
        
        if (arg1 == 0 && arg2 == 0)
            result = arg3
            sub_403df8(result)
    else if (arg2 != 0)
        int32_t edi_1
        result, edi_1 = sub_4cda5c(arg2, 0, arg3)
        
        if (edi_1 s> 0)
            return sub_4040c4(arg3, "+ ", *arg3)
    else
        result = arg3
        sub_403df8(result)
    
    return result
}
