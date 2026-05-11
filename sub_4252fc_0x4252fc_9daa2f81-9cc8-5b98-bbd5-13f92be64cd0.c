// ============================================================
// 函数名称: sub_4252fc
// 虚拟地址: 0x4252fc
// WARP GUID: 9daa2f81-9cc8-5b98-bbd5-13f92be64cd0
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_430e00, sub_403248
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_4252fc(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* edi = *(arg2 + 8)
    int32_t* edi = *(arg2 + 8)
    
    if (sub_403248(edi, 0x422ea8) == 0)
        *(arg1 + 0x1fa) = arg1[0x7e].b
    else
        *(arg1 + 0x1fa) = arg1 == edi
    
    int32_t edx
    edx.b = *(arg1 + 0x1fa)
    (*(*arg1 + 0xbc))()
    return sub_430e00()
}
