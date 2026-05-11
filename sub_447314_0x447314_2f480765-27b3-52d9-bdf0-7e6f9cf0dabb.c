// ============================================================
// 函数名称: sub_447314
// 虚拟地址: 0x447314
// WARP GUID: 2f480765-27b3-52d9-bdf0-7e6f9cf0dabb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: LoadCursorA
// [内部子函数调用]: sub_4473cc
// [被调用的父级函数]: sub_446fc8
// ============================================================

int32_t* __convention("regparm")sub_447314(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x54) = LoadCursorA(nullptr, 0x7f00)
    *(arg1 + 0x54) = LoadCursorA(nullptr, 0x7f00)
    int32_t i = 0xffffffea
    void* esi = &data_52ea30
    int32_t* result
    
    do
        HINSTANCE hInstance
        
        if (i s< 0xffffffef)
            if (i != 0xffffffeb)
                hInstance = nullptr
            else
                hInstance = data_5314dc
        else if (i s<= 0xfffffff4 || i == 0xffffffeb)
            hInstance = data_5314dc
        else
            hInstance = nullptr
        
        result = sub_4473cc(arg1, i, LoadCursorA(hInstance, *esi))
        i += 1
        esi += 4
    while (i != 0xffffffff)
    
    return result
}
