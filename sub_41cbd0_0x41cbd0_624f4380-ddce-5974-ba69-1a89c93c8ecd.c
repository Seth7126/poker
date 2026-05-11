// ============================================================
// 函数名称: sub_41cbd0
// 虚拟地址: 0x41cbd0
// WARP GUID: 624f4380-ddce-5974-ba69-1a89c93c8ecd
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetEnhMetaFileHeader, GetClipboardData, CopyEnhMetaFileA
// [内部子函数调用]: sub_41c3a4, sub_419e00
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_41cbd0(int32_t* arg1)
{
    // 第一条实际指令: HANDLE hEnh = GetClipboardData(0xe)
    HANDLE hEnh = GetClipboardData(0xe)
    
    if (hEnh == 0)
        sub_419e00(data_53069c)
        noreturn
    
    sub_41c3a4(arg1)
    void* esi = arg1[8]
    *(esi + 8) = CopyEnhMetaFileA(hEnh, nullptr)
    void enhMetaHeader
    GetEnhMetaFileHeader(*(esi + 8), 0x64, &enhMetaHeader)
    int32_t var_50
    int32_t var_48
    *(esi + 0xc) = var_48 - var_50
    int32_t var_4c
    int32_t var_44
    *(esi + 0x10) = var_44 - var_4c
    *(esi + 0x18) = 0
    arg1[9].b = 1
    int32_t eax_9
    eax_9.b = (*(*arg1 + 0x24))() != 0
    *(arg1 + 0x1a) = eax_9.b
    return (*(*arg1 + 0x10))()
}
