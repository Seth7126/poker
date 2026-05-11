// ============================================================
// 函数名称: sub_4062e1
// 虚拟地址: 0x4062e1
// WARP GUID: f54ba6c9-5b3d-54b0-b50a-62cb0ec6029d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4061e0
// [被调用的父级函数]: sub_4e6028, sub_52a8cc, sub_4692db, sub_52c7c8, sub_4dc090, sub_468ec0, sub_4cbd28, sub_46f698, sub_4692e4, sub_5205d0, sub_47be18, sub_524d14, sub_468eb7, sub_468af3, sub_4b7714, sub_468afc, sub_46f4fc, sub_4ecdcc
// ============================================================

int32_tsub_4062e1()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    ecx.b = data_53104a
    ecx.b &= 3
    
    if (ecx.b u> 2)
        ecx.b = 2
    
    int32_t* eax
    int32_t edx
    return sub_4061e0(eax, edx, ecx) __tailcall
}
