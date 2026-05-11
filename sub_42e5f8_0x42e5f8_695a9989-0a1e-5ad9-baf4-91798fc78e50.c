// ============================================================
// 函数名称: sub_42e5f8
// 虚拟地址: 0x42e5f8
// WARP GUID: 695a9989-0a1e-5ad9-baf4-91798fc78e50
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_444990, sub_440ee0
// [被调用的父级函数]: sub_42e780, sub_430e60, sub_42da58, sub_430e08
// ============================================================

int32_t* __convention("regparm")sub_42e5f8(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t* result = sub_440ee0(arg1)
    int32_t* result = sub_440ee0(arg1)
    
    if (result == 0)
        return result
    
    return sub_444990(result, arg1, arg2)
}
