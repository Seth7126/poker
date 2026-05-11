// ============================================================
// 函数名称: sub_442e78
// 虚拟地址: 0x442e78
// WARP GUID: 4fae90a1-11b1-5f84-adb9-2ab8d5636918
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA, IsIconic
// [内部子函数调用]: sub_431bcc, sub_444f08, sub_4318d0
// [被调用的父级函数]: sub_446050, sub_4425d8
// ============================================================

BOOL __convention("regparm")sub_442e78(int32_t* arg1)
{
    // 第一条实际指令: BOOL result
    BOOL result
    
    if (*data_53040c == 0)
        result = IsIconic(sub_4318d0(arg1))
        
        if (result != 0)
            return (*(*arg1 + 0x74))()
    else
        result = sub_431bcc(arg1)
        
        if (result.b != 0 && *(arg1 + 0x211) != 3)
            HICON lParam = sub_444f08(arg1)
            return SendMessageA(sub_4318d0(arg1), 0x80, 1, lParam)
    
    return result
}
