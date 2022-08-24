/*
 * Copyright (c) 2022, Martin Falisse <mfalisse@outlook.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <AK/String.h>

namespace Web::CSS {

class GridTrackPlacement {
public:
    GridTrackPlacement(int, bool);
    GridTrackPlacement(int);
    GridTrackPlacement();

    static GridTrackPlacement make_auto() { return GridTrackPlacement(); };

    void set_position(int position) { m_position = position; }
    int position() const { return m_position; }

    void set_has_span(bool has_span) { m_has_span = has_span; }
    bool has_span() const { return m_has_span; }

    String to_string() const;
    bool operator==(GridTrackPlacement const& other) const
    {
        return m_position == other.position() && m_has_span == other.has_span();
    }

private:
    int m_position { 0 };
    bool m_has_span { false };
};

}
