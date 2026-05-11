// ============================================================
// 函数名称: sub_406bf4
// 虚拟地址: 0x406bf4
// WARP GUID: 2a8575d8-00b2-5c12-b271-910d5b548e9b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: TlsSetValue, LocalAlloc
// [内部子函数调用]: sub_403d4c
// [被调用的父级函数]: sub_406c44
// ============================================================

BOOLsub_406bf4()
{
    // 第一条实际指令: if (data_5314d4 s< 0)
    if (data_5314d4 s< 0)
        sub_403d4c()
        noreturn
    
    HLOCAL lpTlsValue = LocalAlloc(LMEM_ZEROINIT, 0x18)
    
    if (lpTlsValue == 0)
        sub_403d4c()
        noreturn
    
    BOOL result = TlsSetValue(data_5314d4, lpTlsValue)
    data_5314e4 = lpTlsValue
    return result
}
