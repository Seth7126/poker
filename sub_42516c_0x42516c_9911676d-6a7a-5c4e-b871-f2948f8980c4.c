// ============================================================
// 函数名称: sub_42516c
// 虚拟地址: 0x42516c
// WARP GUID: 9911676d-6a7a-5c4e-b871-f2948f8980c4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42c754, sub_431bcc, sub_440ee0
// [被调用的父级函数]: sub_44c778
// ============================================================

int32_t* __convention("regparm")sub_42516c(int32_t* arg1, char arg2)
{
    // 第一条实际指令: arg1[0x7e].b = arg2
    arg1[0x7e].b = arg2
    int32_t* result = sub_431bcc(arg1)
    
    if (result.b != 0)
        result = sub_440ee0(arg1)
        
        if (result != 0)
            return sub_42c754(result, result[0x82])
    
    return result
}
