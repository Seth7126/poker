// ============================================================
// 函数名称: sub_4a8ef8
// 虚拟地址: 0x4a8ef8
// WARP GUID: 3343c77b-f5c9-510b-a4b6-bba7a716ceac
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a5574
// [被调用的父级函数]: sub_4ab0a8, sub_4a8ea2
// ============================================================

int32_t* __convention("regparm")sub_4a8ef8(void* arg1)
{
    // 第一条实际指令: sub_4a5574(arg1)
    sub_4a5574(arg1)
    int32_t* result = *(arg1 + 0x68)
    
    if (result == 0)
        return result
    
    int32_t edx
    edx.b = 1
    return (*(*result + 0x1c))()
}
