// ============================================================
// 函数名称: sub_4b6580
// 虚拟地址: 0x4b6580
// WARP GUID: 047967ee-5c95-55fc-b1e8-0d7869cb6db4
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CoInitialize
// [内部子函数调用]: sub_40db10
// [被调用的父级函数]: sub_4b6678
// ============================================================

int32_tsub_4b6580()
{
    // 第一条实际指令: if (data_532ef8 != 0)
    if (data_532ef8 != 0)
        data_532ef8()
    
    if (data_52fe60 == 0xffffffff || data_52fe4c == 0)
        char eax_5 = sub_40db10(CoInitialize(nullptr))
        data_532efc = eax_5
        return eax_5
    
    data_532efc = sub_40db10(data_52fe4c(0, data_52fe60))
    void* eax_3
    
    if (*data_53013c != 0 || (data_52fe60.b & 2) != 0 || data_52fe60 == 0)
        eax_3.b = 1
    else
        eax_3 = nullptr
    
    *data_53013c = eax_3.b
    return eax_3
}
